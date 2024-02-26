#include <iostream>
#include <cmath>
#include <vector>
#include "wav.hpp"

using namespace std;

int main() {
    int sample_rate = 44100;
    int sample_rate2 = 20000;
    int sample_rate3 = 60000;


    double duration = 2.0;
    int n_samples = sample_rate * duration;
    std::vector<int> waveform;

    int frequency0 = 340;
    int frequency1 = 440;
    int frequency2 = 540;    
    int frequency3 = 640;
    int frequency4 = 740;
    int frequency5 = 840;
    int frequency6 = 940;

    int volume = 6000;
//---------------------------------------------------------------------------------
//this is changing the A in the equation
    for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        double t = i_sample * 1.0 / sample_rate;
        waveform.push_back(volume * sin(2 * M_PI * frequency0 * t));
        if(volume<30000){
            volume = volume + 1;
        }else{
            volume = 2000;
        }

    }

    MakeWavFromVector("tone1.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------
//
//
//

for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        n_samples = sample_rate2 * duration;
        double t = i_sample * 1.0 / sample_rate2;
        waveform.push_back(volume * sin(2 * M_PI * frequency1 * t));
    }

    MakeWavFromVector("tone2.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------
for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        double t = i_sample * 1.0 / sample_rate;
        waveform.push_back(volume * sin(2 * M_PI * frequency2 * t));
    }

    MakeWavFromVector("tone3.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------
for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        double t = i_sample * 1.0 / sample_rate;
        waveform.push_back(volume * sin(2 * M_PI * frequency3 * t));
    }

    MakeWavFromVector("tone4.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------
for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        double t = i_sample * 1.0 / sample_rate;
        waveform.push_back(volume * sin(2 * M_PI * frequency4 * t));
    }

    MakeWavFromVector("tone5.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------
for (int i_sample = 0; i_sample < n_samples; i_sample++) {
        double t = i_sample * 1.0 / sample_rate;
        waveform.push_back(volume * sin(2 * M_PI * frequency5 * t));
    }

    MakeWavFromVector("tone6.wav", sample_rate, waveform);
//---------------------------------------------------------------------------------







    return 0;
}
