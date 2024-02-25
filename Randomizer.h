#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

string RandomCardPast(){
    string cardPast;
    
    srand(5);
    int x = (rand()%43+1) - 5;
    
    if(x < 0){
        x = x + 10;
    }
    
    if(x == 1){
        return cardPast = "New Moon";
    }
    if(x == 2){
        return cardPast = "Waxing Crescent Moon";
    }
    if(x == 3){
        return cardPast = "First Quarter Moon";
    }
    if(x == 4){
        return cardPast = "Gibbons Moon";
    }
    if(x == 5){
        return cardPast = "Full Moon";
    }
    if(x == 6){
        return cardPast = "Disseminating Moon";
    }
    if(x == 7){
        return cardPast = "Third Quarter Moon";
    }
    if(x == 8){
        return cardPast = "Balsamic Moon";
    }
    if(x == 9){
        return cardPast = "New Moon in Aries";
    }
    if(x == 10){
        return cardPast = "New Moon in Taurus";
    }
    if(x == 11){
        return cardPast = "New Moon in Gemini";
    }
    if(x == 12){
        return cardPast = "New Moon in Cancer";
    }
    if(x == 13){
        return cardPast = "New Moon in Leo";
    }
    if(x == 14){
        return cardPast = "New Moon in Virgo";
    }
    if(x == 15){
        return cardPast = "New Moon in Libra";
    }
    if(x == 16){
        return cardPast = "New Moon in Scorpio";
    }
    if(x == 17){
        return cardPast = "New Moon in Sagittarius";
    }
    if(x == 18){
        return cardPast = "New Moon in Capricorn";
    }
    if(x == 19){
        return cardPast = "New Moon in Aquarius";
    }
    if(x == 20){
        return cardPast = "New Moon in Pisces";
    }
    if(x == 21){
        return cardPast = "Full Moon in Aries";
    }
    if(x == 22){
        return cardPast = "Full Moon in Taurus";
    }
    if(x == 23){
        return cardPast = "Full Moon in Gemini";
    }
    if(x == 24){
        return cardPast = "Full Moon in Cancer";
    }
    if(x == 25){
        return cardPast = "Full Moon in Leo";
    }
    if(x == 26){
        return cardPast = "Full Moon in Virgo";
    }
    if(x == 27){
        return cardPast = "Full Moon in Libra";
    }
    if(x == 28){
        return cardPast = "Full Moon in Scorpio";
    }
    if(x == 29){
        return cardPast = "Full Moon in Sagittarius";
    }
    if(x == 30){
        return cardPast = "Full Moon in Capricorn";
    }
    if(x == 31){
        return cardPast = "Full Moon in Aquarius";
    }
    if(x == 32){
        return cardPast = "Full Moon in Pisces";
    }
    if(x == 33){
        return cardPast = "New Moon Eclipse";
    }
    if(x == 34){
        return cardPast = "Full Moon Eclipse";
    }
    if(x == 35){
        return cardPast = "Waxing Moon";
    }
    if(x == 36){
        return cardPast = "Waning Moon";
    }
    if(x == 37){
        return cardPast = "Void-of-Course Moon";
    }
    if(x == 38){
        return cardPast = "Cardinal Moon";
    }
    if(x == 39){
        return cardPast = "Fixed Moon";
    }
    if(x == 40){
        return cardPast = "Mutable Moon";
    }
    if(x == 41){
        return cardPast = "Supermoon";
    }
    if(x == 42){
        return cardPast = "Blue Moon";
    }
    if(x == 43){
        return cardPast = "South Node";
    }
}

string RandomMeaningPast(string cardPast){
    string meaningPast;

    if(cardPast == "New Moon"){
        return meaningPast = "You have chosen the right path.";
    }
    if(cardPast == "Waxing Crescent Moon"){
        return meaningPast = "Your dreams are manifesting in plain sight.";
    }
    if(cardPast == "First Quarter Moon"){
        return meaningPast = "You are half way to achieving your goal.";
    }
    if(cardPast == "Gibbons Moon"){
        return meaningPast = "Stay focused.";
    }
    if(cardPast == "Full Moon"){
        return meaningPast = "You may need to forgive someone to release the negative energy.";
    }
    if(cardPast == "Disseminating Moon"){
        return meaningPast = "Avoid falling into a slump.";
    }
    if(cardPast == "Third Quarter Moon"){
        return meaningPast = "Your life may be out of balance.";
    }
    if(cardPast == "Balsamic Moon"){
        return meaningPast = "You need more time to heal.";
    }
    if(cardPast == "New Moon in Aries"){
        return meaningPast = "Do your best and appreciate your effort.";
    }
    if(cardPast == "New Moon in Taurus"){
        return meaningPast = "Take some time to pamper yourself.";
    }
    if(cardPast == "New Moon in Gemini"){
        return meaningPast = "Time to tell someone how you feel.";
    }
    if(cardPast == "New Moon in Cancer"){
        return meaningPast = "Meditation will help you banish your insecurities.";
    }
    if(cardPast == "New Moon in Leo"){
        return meaningPast = "You've got yourself an admirer.";
    }
    if(cardPast == "New Moon in Virgo"){
        return meaningPast = "Pay attention to details if you want success.";
    }
    if(cardPast == "New Moon in Libra"){
        return meaningPast = "Feel more, think less.";
    }
    if(cardPast == "New Moon in Scorpio"){
        return meaningPast = "Time to let go of a grudge you've been holding.";
    }
    if(cardPast == "New Moon in Sagittarius"){
        return meaningPast = "Don't be narrow-minded.";
    }
    if(cardPast == "New Moon in Capricorn"){
        return meaningPast = "Hard work will make your dreams a reality.";
    }
    if(cardPast == "New Moon in Aquarius"){
        return meaningPast = "You need to be more detached from this situation.";
    }
    if(cardPast == "New Moon in Pisces"){
        return meaningPast = "Face your fears.";
    }
    if(cardPast == "Full Moon in Aries"){
        return meaningPast = "You need to have more fun!";
    }
    if(cardPast == "Full Moon in Taurus"){
        return meaningPast = "More exercises is called for.";
    }
    if(cardPast == "Full Moon in Gemini"){
        return meaningPast = "Don't be superficial.";
    }
    if(cardPast == "Full Moon in Cancer"){
        return meaningPast = "You should've spent more time with your family.";
    }
    if(cardPast == "Full Moon in Leo"){
        return meaningPast = "Everyone is equally important.";
    }
    if(cardPast == "Full Moon in Virgo"){
        return meaningPast = "Overly critical of others? An apology may be in order.";
    }
    if(cardPast == "Full Moon in Libra"){
        return meaningPast = "Look an another person through the eyes of love instead and it will change your perspective.";
    }
    if(cardPast == "Full Moon in Scorpio"){
        return meaningPast = "It's time to live joyfully rather than fearfully.";
    }
    if(cardPast == "Full Moon in Sagittarius"){
        return meaningPast = "The situation may have risen due to you being distracted.";
    }
    if(cardPast == "Full Moon in Capricorn"){
        return meaningPast = "It's time to stop fearing the worst.";
    }
    if(cardPast == "Full Moon in Aquarius"){
        return meaningPast = "Use your heart instead of your head.";
    }
    if(cardPast == "Full Moon in Pisces"){
        return meaningPast = "You're in a super-romantic-state but not super-realistic-state.";
    }
    if(cardPast == "New Moon Eclipse"){
        return meaningPast = "This is an important turning point in your life.";
    }
    if(cardPast == "Full Moon Eclipse"){
        return meaningPast = "You have to forgive yourself to get back on track.";
    }
    if(cardPast == "Waxing Moon"){
        return meaningPast = "Keep moving forward.";
    }
    if(cardPast == "Waning Moon"){
        return meaningPast = "Say sorry to someone who may deserve it.";
    }
    if(cardPast == "Void-of-Course Moon"){
        return meaningPast = "Believe that you will get what you need.";
    }
    if(cardPast == "Cardinal Moon"){
        return meaningPast = "Ask Ganesha, the Hindu Elephant god, for help.";
    }
    if(cardPast == "Fixed Moon"){
        return meaningPast = "Someone needs to back down.";
    }
    if(cardPast == "Mutable Moon"){
        return meaningPast = "You're meandering towards your goal and that's okay.";
    }
    if(cardPast == "Supermoon"){
        return meaningPast = "A resolution to your question is closer than you may think.";
    }
    if(cardPast == "Blue Moon"){
        return meaningPast = "Your attraction toward someone may be verging on the obsessive.";
    }
    if(cardPast == "South Node"){
        return meaningPast = "Stand on your own two feet.";
    }
}

string RandomCardPresent(){
    string cardPresent;

    srand(50);
    int x = (rand()%43+1) - 10;
    
    if(x < 0){
        x = x + 20;
    }

    if(x == 1){
        return cardPresent = "New Moon";
    }
    if(x == 2){
        return cardPresent = "Waxing Crescent Moon";
    }
    if(x == 3){
        return cardPresent = "First Quarter Moon";
    }
    if(x == 4){
        return cardPresent = "Gibbons Moon";
    }
    if(x == 5){
        return cardPresent = "Full Moon";
    }
    if(x == 6){
        return cardPresent = "Disseminating Moon";
    }
    if(x == 7){
        return cardPresent = "Third Quarter Moon";
    }
    if(x == 8){
        return cardPresent = "Balsamic Moon";
    }
    if(x == 9){
        return cardPresent = "New Moon in Aries";
    }
    if(x == 10){
        return cardPresent = "New Moon in Taurus";
    }
    if(x == 11){
        return cardPresent = "New Moon in Gemini";
    }
    if(x == 12){
        return cardPresent = "New Moon in Cancer";
    }
    if(x == 13){
        return cardPresent = "New Moon in Leo";
    }
    if(x == 14){
        return cardPresent = "New Moon in Virgo";
    }
    if(x == 15){
        return cardPresent = "New Moon in Libra";
    }
    if(x == 16){
        return cardPresent = "New Moon in Scorpio";
    }
    if(x == 17){
        return cardPresent = "New Moon in Sagittarius";
    }
    if(x == 18){
        return cardPresent = "New Moon in Capricorn";
    }
    if(x == 19){
        return cardPresent = "New Moon in Aquarius";
    }
    if(x == 20){
        return cardPresent = "New Moon in Pisces";
    }
    if(x == 21){
        return cardPresent = "Full Moon in Aries";
    }
    if(x == 22){
        return cardPresent = "Full Moon in Taurus";
    }
    if(x == 23){
        return cardPresent = "Full Moon in Gemini";
    }
    if(x == 24){
        return cardPresent = "Full Moon in Cancer";
    }
    if(x == 25){
        return cardPresent = "Full Moon in Leo";
    }
    if(x == 26){
        return cardPresent = "Full Moon in Virgo";
    }
    if(x == 27){
        return cardPresent = "Full Moon in Libra";
    }
    if(x == 28){
        return cardPresent = "Full Moon in Scorpio";
    }
    if(x == 29){
        return cardPresent = "Full Moon in Sagittarius";
    }
    if(x == 30){
        return cardPresent = "Full Moon in Capricorn";
    }
    if(x == 31){
        return cardPresent = "Full Moon in Aquarius";
    }
    if(x == 32){
        return cardPresent = "Full Moon in Pisces";
    }
    if(x == 33){
        return cardPresent = "New Moon Eclipse";
    }
    if(x == 34){
        return cardPresent = "Full Moon Eclipse";
    }
    if(x == 35){
        return cardPresent = "Waxing Moon";
    }
    if(x == 36){
        return cardPresent = "Waning Moon";
    }
    if(x == 37){
        return cardPresent = "Void-of-Course Moon";
    }
    if(x == 38){
        return cardPresent = "Cardinal Moon";
    }
    if(x == 39){
        return cardPresent = "Fixed Moon";
    }
    if(x == 40){
        return cardPresent = "Mutable Moon";
    }
    if(x == 41){
        return cardPresent = "Supermoon";
    }
    if(x == 42){
        return cardPresent = "Blue Moon";
    }
    if(x == 43){
        return cardPresent = "South Node";
    }
}

string RandomMeaningPresent(string cardPresent){
    string meaningPresent;

    if(cardPresent == "New Moon"){
        return meaningPresent = "A new start is coming.";
    }
    if(cardPresent == "Waxing Crescent Moon"){
        return meaningPresent = "Have faith in your dreams.";
    }
    if(cardPresent == "First Quarter Moon"){
        return meaningPresent = "Your commitment is being tested.";
    }
    if(cardPresent == "Gibbons Moon"){
        return meaningPresent = "You're very close to achieving your goal.";
    }
    if(cardPresent == "Full Moon"){
        return meaningPresent = "Surrender to the Divine.";
    }
    if(cardPresent == "Disseminating Moon"){
        return meaningPresent = "Take some time to catch your breath.";
    }
    if(cardPresent == "Third Quarter Moon"){
        return meaningPresent = "Change and adapt.";
    }
    if(cardPresent == "Balsamic Moon"){
        return meaningPresent = "Time to heal.";
    }
    if(cardPresent == "New Moon in Aries"){
        return meaningPresent = "Time to take action.";
    }
    if(cardPresent == "New Moon in Taurus"){
        return meaningPresent = "Prosperity lies ahead.";
    }
    if(cardPresent == "New Moon in Gemini"){
        return meaningPresent = "Communication is key.";
    }
    if(cardPresent == "New Moon in Cancer"){
        return meaningPresent = "You and your loved ones are safe.";
    }
    if(cardPresent == "New Moon in Leo"){
        return meaningPresent = "Confidence is your key to success.";
    }
    if(cardPresent == "New Moon in Virgo"){
        return meaningPresent = "Time to rather give than take.";
    }
    if(cardPresent == "New Moon in Libra"){
        return meaningPresent = "A new romance cycle begins.";
    }
    if(cardPresent == "New Moon in Scorpio"){
        return meaningPresent = "Work through your fears.";
    }
    if(cardPresent == "New Moon in Sagittarius"){
        return meaningPresent = "Luck is on your side.";
    }
    if(cardPresent == "New Moon in Capricorn"){
        return meaningPresent = "Your hardwork is paying off.";
    }
    if(cardPresent == "New Moon in Aquarius"){
        return meaningPresent = "Bring love into the situation.";
    }
    if(cardPresent == "New Moon in Pisces"){
        return meaningPresent = "Meditate and contemplate.";
    }
    if(cardPresent == "Full Moon in Aries"){
        return meaningPresent = "A fiery climax approaches!";
    }
    if(cardPresent == "Full Moon in Taurus"){
        return meaningPresent = "Your dreams need a practical plan.";
    }
    if(cardPresent == "Full Moon in Gemini"){
        return meaningPresent = "The answers you need are coming.";
    }
    if(cardPresent == "Full Moon in Cancer"){
        return meaningPresent = "A personal issue reaches resolution.";
    }
    if(cardPresent == "Full Moon in Leo"){
        return meaningPresent = "Don't let pride get in your way.";
    }
    if(cardPresent == "Full Moon in Virgo"){
        return meaningPresent = "You are good enough.";
    }
    if(cardPresent == "Full Moon in Libra"){
        return meaningPresent = "A win-win outcome is forecast.";
    }
    if(cardPresent == "Full Moon in Scorpio"){
        return meaningPresent = "It's time to let go of negativity.";
    }
    if(cardPresent == "Full Moon in Sagittarius"){
        return meaningPresent = "Look at the bigger picture.";
    }
    if(cardPresent == "Full Moon in Capricorn"){
        return meaningPresent = "The end of a tough cycle approaches.";
    }
    if(cardPresent == "Full Moon in Aquarius"){
        return meaningPresent = "Show the world the real you.";
    }
    if(cardPresent == "Full Moon in Pisces"){
        return meaningPresent = "Balance spirituality and practicality.";
    }
    if(cardPresent == "New Moon Eclipse"){
        return meaningPresent = "Expect powerful change.";
    }
    if(cardPresent == "Full Moon Eclipse"){
        return meaningPresent = "Conclusions are within reach.";
    }
    if(cardPresent == "Waxing Moon"){
        return meaningPresent = "The energy is gaining momentum.";
    }
    if(cardPresent == "Waning Moon"){
        return meaningPresent = "Release what you need to.";
    }
    if(cardPresent == "Void-of-Course Moon"){
        return meaningPresent = "Nothing will come of this situation.";
    }
    if(cardPresent == "Cardinal Moon"){
        return meaningPresent = "Behold and make the first move.";
    }
    if(cardPresent == "Fixed Moon"){
        return meaningPresent = "Hold your vision.";
    }
    if(cardPresent == "Mutable Moon"){
        return meaningPresent = "Nothing is yet set in stone.";
    }
    if(cardPresent == "Supermoon"){
        return meaningPresent = "Emotions are running high!";
    }
    if(cardPresent == "Blue Moon"){
        return meaningPresent = "Believe in the impossible.";
    }
    if(cardPresent == "South Node"){
        return meaningPresent = "Don't let your past hold you back.";
    }
}

string RandomCardFuture(){
    string cardFuture;
    
    srand(100);
    int x = (rand()%43+1) - 20;
    
    if(x < 0){
        x = x + 30;
    }

    if(x == 1){
        return cardFuture = "New Moon";
    }
    if(x == 2){
        return cardFuture = "Waxing Crescent Moon";
    }
    if(x == 3){
        return cardFuture = "First Quarter Moon";
    }
    if(x == 4){
        return cardFuture = "Gibbons Moon";
    }
    if(x == 5){
        return cardFuture = "Full Moon";
    }
    if(x == 6){
        return cardFuture = "Disseminating Moon";
    }
    if(x == 7){
        return cardFuture = "Third Quarter Moon";
    }
    if(x == 8){
        return cardFuture = "Balsamic Moon";
    }
    if(x == 9){
        return cardFuture = "New Moon in Aries";
    }
    if(x == 10){
        return cardFuture = "New Moon in Taurus";
    }
    if(x == 11){
        return cardFuture = "New Moon in Gemini";
    }
    if(x == 12){
        return cardFuture = "New Moon in Cancer";
    }
    if(x == 13){
        return cardFuture = "New Moon in Leo";
    }
    if(x == 14){
        return cardFuture = "New Moon in Virgo";
    }
    if(x == 15){
        return cardFuture = "New Moon in Libra";
    }
    if(x == 16){
        return cardFuture = "New Moon in Scorpio";
    }
    if(x == 17){
        return cardFuture = "New Moon in Sagittarius";
    }
    if(x == 18){
        return cardFuture = "New Moon in Capricorn";
    }
    if(x == 19){
        return cardFuture = "New Moon in Aquarius";
    }
    if(x == 20){
        return cardFuture = "New Moon in Pisces";
    }
    if(x == 21){
        return cardFuture = "Full Moon in Aries";
    }
    if(x == 22){
        return cardFuture = "Full Moon in Taurus";
    }
    if(x == 23){
        return cardFuture = "Full Moon in Gemini";
    }
    if(x == 24){
        return cardFuture = "Full Moon in Cancer";
    }
    if(x == 25){
        return cardFuture = "Full Moon in Leo";
    }
    if(x == 26){
        return cardFuture = "Full Moon in Virgo";
    }
    if(x == 27){
        return cardFuture = "Full Moon in Libra";
    }
    if(x == 28){
        return cardFuture = "Full Moon in Scorpio";
    }
    if(x == 29){
        return cardFuture = "Full Moon in Sagittarius";
    }
    if(x == 30){
        return cardFuture = "Full Moon in Capricorn";
    }
    if(x == 31){
        return cardFuture = "Full Moon in Aquarius";
    }
    if(x == 32){
        return cardFuture = "Full Moon in Pisces";
    }
    if(x == 33){
        return cardFuture = "New Moon Eclipse";
    }
    if(x == 34){
        return cardFuture = "Full Moon Eclipse";
    }
    if(x == 35){
        return cardFuture = "Waxing Moon";
    }
    if(x == 36){
        return cardFuture = "Waning Moon";
    }
    if(x == 37){
        return cardFuture = "Void-of-Course Moon";
    }
    if(x == 38){
        return cardFuture = "Cardinal Moon";
    }
    if(x == 39){
        return cardFuture = "Fixed Moon";
    }
    if(x == 40){
        return cardFuture = "Mutable Moon";
    }
    if(x == 41){
        return cardFuture = "Supermoon";
    }
    if(x == 42){
        return cardFuture = "Blue Moon";
    }
    if(x == 43){
        return cardFuture = "South Node";
    }
}

string RandomMeaningFuture(string cardFuture){
    string meaningFuture;

    if(cardFuture == "New Moon"){
        return meaningFuture = "You will soon start to feel more hopeful about getting what you want.";
    }
    if(cardFuture == "Waxing Crescent Moon"){
        return meaningFuture = "Be patient as events unfold.";
    }
    if(cardFuture == "First Quarter Moon"){
        return meaningFuture = "You need to recommit to someone or something.";
    }
    if(cardFuture == "Gibbons Moon"){
        return meaningFuture = "You need to get back into good health habits.";
    }
    if(cardFuture == "Full Moon"){
        return meaningFuture = "A wish you made may about to come true.";
    }
    if(cardFuture == "Disseminating Moon"){
        return meaningFuture = "You need to take some time out for your own good.";
    }
    if(cardFuture == "Third Quarter Moon"){
        return meaningFuture = "Something new and exciting is around the corner.";
    }
    if(cardFuture == "Balsamic Moon"){
        return meaningFuture = "You are about to turn the corner.";
    }
    if(cardFuture == "New Moon in Aries"){
        return meaningFuture = "A new person is coming into your life.";
    }
    if(cardFuture == "New Moon in Taurus"){
        return meaningFuture = "Start saving, no matter how small the amount is.";
    }
    if(cardFuture == "New Moon in Gemini"){
        return meaningFuture = "Read more books.";
    }
    if(cardFuture == "New Moon in Cancer"){
        return meaningFuture = "Let someone get a bit closer.";
    }
    if(cardFuture == "New Moon in Leo"){
        return meaningFuture = "Shine your light!";
    }
    if(cardFuture == "New Moon in Virgo"){
        return meaningFuture = "Be of service to others, then love and money will follow.";
    }
    if(cardFuture == "New Moon in Libra"){
        return meaningFuture = "A legal matter will go your way.";
    }
    if(cardFuture == "New Moon in Scorpio"){
        return meaningFuture = "Make an investment.";
    }
    if(cardFuture == "New Moon in Sagittarius"){
        return meaningFuture = "This is a wonderful time to start a course, either to study or to teach.";
    }
    if(cardFuture == "New Moon in Capricorn"){
        return meaningFuture = "A very good omen for studying or teaching.";
    }
    if(cardFuture == "New Moon in Aquarius"){
        return meaningFuture = "Thinking outside the box will bring the solution.";
    }
    if(cardFuture == "New Moon in Pisces"){
        return meaningFuture = "This situation is being healed.";
    }
    if(cardFuture == "Full Moon in Aries"){
        return meaningFuture = "Being assertive is good - just don't ride roughshod over anyone.";
    }
    if(cardFuture == "Full Moon in Taurus"){
        return meaningFuture = "Chasing money doesn't work - you need to chase a dream.";
    }
    if(cardFuture == "Full Moon in Gemini"){
        return meaningFuture = "Job applications have good prospects.";
    }
    if(cardFuture == "Full Moon in Cancer"){
        return meaningFuture = "Don't be clingy.";
    }
    if(cardFuture == "Full Moon in Leo"){
        return meaningFuture = "A friendship may come to an end.";
    }
    if(cardFuture == "Full Moon in Virgo"){
        return meaningFuture = "Raise your karma by doing something good for someone else.";
    }
    if(cardFuture == "Full Moon in Libra"){
        return meaningFuture = "It's time for you to make a firm decision.";
    }
    if(cardFuture == "Full Moon in Scorpio"){
        return meaningFuture = "The end of an argument is here.";
    }
    if(cardFuture == "Full Moon in Sagittarius"){
        return meaningFuture = "Be confident (without bring overconfident) to win the day.";
    }
    if(cardFuture == "Full Moon in Capricorn"){
        return meaningFuture = "Find a balance between your personal and private lives.";
    }
    if(cardFuture == "Full Moon in Aquarius"){
        return meaningFuture = "A situation is going to take a very unexpected turn.";
    }
    if(cardFuture == "Full Moon in Pisces"){
        return meaningFuture = "Follow your intuition - it won't let you down.";
    }
    if(cardFuture == "New Moon Eclipse"){
        return meaningFuture = "Whetever is happening now is happening for your best";
    }
    if(cardFuture == "Full Moon Eclipse"){
        return meaningFuture = "Doors which slam shut now will not reopen.";
    }
    if(cardFuture == "Waxing Moon"){
        return meaningFuture = "Review your goals and make sure you're still committed.";
    }
    if(cardFuture == "Waning Moon"){
        return meaningFuture = "Move forward with as little resistance as possible.";
    }
    if(cardFuture == "Void-of-Course Moon"){
        return meaningFuture = "The chances of something happening are diminishing.";
    }
    if(cardFuture == "Cardinal Moon"){
        return meaningFuture = "Avoid recklessness or moving too fast.";
    }
    if(cardFuture == "Fixed Moon"){
        return meaningFuture = "A personal or professional relationship will be enduring.";
    }
    if(cardFuture == "Mutable Moon"){
        return meaningFuture = "Stay with it, whatever 'it' means to you.";
    }
    if(cardFuture == "Supermoon"){
        return meaningFuture = "Something exciting lies ahead!";
    }
    if(cardFuture == "Blue Moon"){
        return meaningFuture = "Just because you can do something, doesn't mean you should.";
    }
    if(cardFuture == "South Node"){
        return meaningFuture = "Time to stop obsessing about someone or something.";
    }
}