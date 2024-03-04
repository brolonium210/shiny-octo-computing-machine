#include <iostream>
#include <cmath>
#include <vector>
#include "wav.hpp"

using namespace std;


std::vector<int>makeNote(int A,int k,int w ,int f,int lam,int T,int D){
    std::vector<int> note01;
    //The sample rate must be more than twice the highest frequency present in the audio signal 
    //to accurately represent the sound without aliasing (Nyquist-Shannon sampling theorem)
    int sample_rate = f*2;
    //this means for each second it will take the number of samples as per Nyquist-Shannon
    int sample_no = sample_rate*D;
    


    return note01;
}





int main() {
    //internet noted this was the sample rate for CD quality but Nyquist-Shannon says less
    // int sample_rate = 44100;
    //these are our core qualities of our signal
    //I am instantiating them to 0 becasue apparently that is best practice
    //amplitude
    int A = 0;
    //wave number ,this proboaly will be returned to for sample rate TBC
    int k = 0;
    //wave angle how flat or tall the wave is ,probobly hassome effect on the sound of the wave
    int w = 0;
    //the frequency this is pretty mch how high pitched the sound will be
    int f = 0;
    //wave length the peak to peak distance
    int lam = 0;
    //period ,this will prob be important
    int T =0;
    //I will make duration for this sample 5 seconds with a view to put it on loop
    int D = 0;

    //i will use the cmath library for the pi values
    //this will be a function to make the wave form
    //prob get it to return a vector for starters the non next run do Int/File

 









    return 0;
}


    // int sample_rate2 = 20000;
    // int sample_rate3 = 60000;


    // double duration = 15.0;
    // int n_samples = sample_rate * duration;
    // std::vector<int> waveform;

    // int frequency0 = 500;
    // int frequency1 = 440;
    // int frequency2 = 540;    
    // int frequency3 = 640;
    // int frequency4 = 740;
    // int frequency5 = 840;
    // int frequency6 = 940;

    // int volume = 6000;
//---------------------------------------------------------------------------------
//this is changing the A in the equation
    // for (int i_sample = 0; i_sample < n_samples; i_sample++) {
    //     double t = i_sample * 1.0 / sample_rate;
    //     int fun_freq = (volume * sin(2 * M_PI * frequency0 * t));
    //     int secHarm = (volume * sin(2 * M_PI * (frequency0*2) * t));
    //     int thiHarm = (volume * sin(2 * M_PI * (frequency0*3) * t));
    //     int forHarm = (volume * sin(2 * M_PI * (frequency0*4) * t));
        // int temp[] = {fun_freq,secHarm,thiHarm,forHarm};


        // waveform.push_back(fun_freq);
        // waveform.push_back(fun_freq+fun_freq);
        // waveform.push_back(fun_freq+secHarm);
        // waveform.push_back(fun_freq+secHarm+thiHarm);


        // if(volume<30000){
        //     volume = volume + 1;
        // }else{
        //     volume = 2000;
        // }

    // }

    // int time_up = 10;
    // bool upOrDown = 0;
    // std::vector<int> police_siren;
    // double t = 1.0 / sample_rate;
    

    // for(int i =0;i<(n_samples*time_up);i++){
    //     double t = i * 1.0 / sample_rate;
    //     int fun_freq = (volume * sin(2 * M_PI * frequency0 * t));
    //     int fun_freq2 = (volume * sin(2 * M_PI * (frequency0*4) * t));

    //     if((i%n_samples) == 0){
    //         upOrDown = !upOrDown;
    //     }
    //     if(upOrDown == 1){
    //         police_siren.push_back(fun_freq);
    //     }else{
    //         police_siren.push_back(fun_freq2);
    //     }

    // }

    // MakeWavFromVector("toneD.wav", sample_rate, police_siren);
//---------------------------------------------------------------------------------
//
//
//

// for (int i_sample = 0; i_sample < n_samples; i_sample++) {
//         n_samples = sample_rate2 * duration;
//         double t = i_sample * 1.0 / sample_rate2;
//         waveform.push_back(volume * sin(2 * M_PI * frequency1 * t));
//     }

//     MakeWavFromVector("tone2.wav", sample_rate, waveform);
// //---------------------------------------------------------------------------------
// for (int i_sample = 0; i_sample < n_samples; i_sample++) {
//         double t = i_sample * 1.0 / sample_rate;
//         waveform.push_back(volume * sin(2 * M_PI * frequency2 * t));
//     }

//     MakeWavFromVector("tone3.wav", sample_rate, waveform);
// //---------------------------------------------------------------------------------
// for (int i_sample = 0; i_sample < n_samples; i_sample++) {
//         double t = i_sample * 1.0 / sample_rate;
//         waveform.push_back(volume * sin(2 * M_PI * frequency3 * t));
//     }

//     MakeWavFromVector("tone4.wav", sample_rate, waveform);
// //---------------------------------------------------------------------------------
// for (int i_sample = 0; i_sample < n_samples; i_sample++) {
//         double t = i_sample * 1.0 / sample_rate;
//         waveform.push_back(volume * sin(2 * M_PI * frequency4 * t));
//     }

//     MakeWavFromVector("tone5.wav", sample_rate, waveform);
// //---------------------------------------------------------------------------------
// for (int i_sample = 0; i_sample < n_samples; i_sample++) {
//         double t = i_sample * 1.0 / sample_rate;
//         waveform.push_back(volume * sin(2 * M_PI * frequency5 * t));
//     }

//     MakeWavFromVector("tone6.wav", sample_rate, waveform);
// //---------------------------------------------------------------------------------








