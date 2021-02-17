// 2) CSV����Q�����z��ɕϊ�
function csv2Array(str) {
    var csvData = [];
    var lines = str.split("\n");
    for (var i = 0; i < lines.length; ++i) {
        var cells = lines[i].split(",");
        csvData.push(cells);
    }
    return csvData;
}

function drawBarChart(data) {
    // 3)chart.js��dataset�p�̔z���p��
    var tmpLabels = [], tmpData1 = [], tmpData2 = [];
    for (var row in data) {
        tmpLabels.push(data[row][0]);
        tmpData1.push(data[row][1]);
        tmpData2.push(data[row][2]);
    };

    // 4)chart.js�ŕ`��
    var ctx = document.getElementById("myChart").getContext("2d");
    var myChart = new Chart(ctx, {
        type: "bar",
        data: {
            labels: tmpLabels,
            datasets: [
                { label: "Tokyo", data: tmpData1, backgroundColor: "red" },
                { label: "Osaka", data: tmpData2, backgroundColor: "blue" }
            ]
        }
    });
}

function main() {
    // 1) ajax��CSV�t�@�C�������[�h
    var req = new XMLHttpRequest();
    var filePath = "data.csv";
    req.open("GET", filePath, true);
    req.onload = function () {
        // 2) CSV�f�[�^�ϊ��̌Ăяo��
        data = csv2Array(req.responseText);
        // 3) chart.js�f�[�^�����A4) chart.js�`��̌Ăяo��
        drawBarChart(data);
    };
    req.send(null);
}

main();