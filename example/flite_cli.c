#include <stdio.h>

#include <flite.h>

// ideally these would be in a header file
cst_voice *register_cmu_us_kal(const char *voxdir);   // 8kHz
cst_voice *register_cmu_us_kal16(const char *voxdir); // 16kHz
cst_voice *register_cmu_us_slt(const char *voxdir);
cst_voice *register_cmu_us_rms(const char *voxdir);

int main()
{
    int result = flite_init();
    if (result != 0)
    {
        printf("Failed to initialize flite\n");
        return 1;
    }

    cst_voice *desired_voice = register_cmu_us_rms(NULL);

    if (desired_voice == NULL)
    {
        printf("Failed to select voice\n");
        return 1;
    }

    flite_text_to_speech("Now this is the story all about how, My life got flipped-turned upside down, And I'd like to take a minute, just sit right there, I'll tell you how I became the prince of a town called Bel Air. ", desired_voice, "output.wav");

    return 0;
}