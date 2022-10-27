import speech_recognition as sr
import webbrowser
def takecommand1():
        r = sr.Recognizer() #initilize recognizer
        with sr.Microphone() as source:# use the microphone as source for input
            print("Listening...... ")
            # minumum length of silence to end phrase
            r.pause_threshold = 0.8
            audio = r.listen(source)#listen user input
        print("Recognizing....")
        try:
            # recognize audio using google
            querry = r.recognize_google(audio, language='en-in').lower()
            print(f"user said :{querry}\n")
        except:
            print("unable to here you!")
            return "unable to here you!"
        return querry
while(1):
    querry=takecommand1()
    if "google" in querry:
        webbrowser.open("www.google.com")
    elif "instagram" in querry:
        webbrowser.open("www.instagram.com")
    elif "exit" or "stop application" in querry:
        quit()
    































# import pyttsx3
# engine = pyttsx3.init('sapi5')
# voices = engine.getProperty('voices')
# engine.setProperty('voice', voices[1].id)
# def speak(audio):
#     engine.say(audio)
#     engine.runAndWait()
# speak("hello")