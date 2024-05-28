function calculateFlightTime() {
    var mAh = parseFloat(document.getElementById('mAh').value);
    var motorAmp = parseFloat(document.getElementById('motorAmp').value);

    var effectiveBatAmp = 0.78 * mAh / 1000.0;
    var flightTime = (effectiveBatAmp / motorAmp) * 60;

    var hours = Math.floor(flightTime / 60);
    var minutes = Math.floor(flightTime % 60);
    var seconds = Math.floor((flightTime - (hours * 60 + minutes)) * 60);

    var result = document.getElementById('result');
    result.innerHTML = 'The estimated flight time is ' + hours + ' hours, ' + minutes + ' minutes, and ' + seconds + ' seconds.';
}
