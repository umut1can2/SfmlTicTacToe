//Simple TicTacToe by Umutcan A.
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
using namespace sf;
using namespace std;
//  -*- Vars -*-  //

/// strings ///

char ch = 'X'; // First x starts
char c1;
char c2;
char c3;
char c4;
char c5;
char c6;
char c7;
char c8;
char c9;

/// Booleans ///
bool bool1 = true;
bool bool2 = true;
bool bool3 = true;
bool bool4 = true;
bool bool5 = true;
bool bool6 = true;
bool bool7 = true;
bool bool8 = true;
bool bool9 = true;

bool realWin = false;

void changePlayer(char x,Text &drawing){
	if (x == 'O')
	{
		drawing.setString("O Oynuyor");
	}else if (x == 'X')
	{
		drawing.setString("X Oynuyor");
	}
	
}
void update(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine){
	app.draw(one);
    app.draw(two);
    app.draw(thr);
    app.draw(four);
	app.draw(five);
	app.draw(six);
	app.draw(sev);
	app.draw(eig);
	app.draw(nine);
}

void resetColor(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine)
{
	one.setColor( Color::Black );
	two.setColor( Color::Black );
	thr.setColor( Color::Black );
	four.setColor( Color::Black );
	five.setColor( Color::Black );
	six.setColor( Color::Black );
	sev.setColor( Color::Black );
	eig.setColor( Color::Black );
	nine.setColor( Color::Black );
}

void greenColor(Text &f, Text &s, Text &t)
{
	f.setColor( Color::Green );
	s.setColor( Color::Green );
	t.setColor( Color::Green );
}

void redColor(Text &colorCh1,Text &colorCh2,Text &colorCh3,Text &colorCh4,Text &colorCh5,Text &colorCh6)
{
	colorCh1.setColor( Color::Red );
	colorCh2.setColor( Color::Red );
	colorCh3.setColor( Color::Red );
	colorCh4.setColor( Color::Red );
	colorCh5.setColor( Color::Red );
	colorCh6.setColor( Color::Red );
}

void win(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine)
{
    /* FOR X */
    //X's Side
    if(c1 == 'X' && c2 == 'X' && c3 == 'X'){
    	cout << "Win X\n";

      	greenColor(one,two,thr);

      	redColor(four,five,six,sev,eig,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c4 == 'X' && c5 == 'X' && c6 == 'X'){
    	cout << "Win X\n";

      	greenColor(four,five,six);

      	redColor(one,two,thr,sev,eig,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c7 == 'X' && c8 == 'X' && c9 == 'X'){
    	cout << "Win X\n";

      	greenColor(sev,eig,nine);

      	redColor(one,two,thr,four,five,six);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    //X's Down
    if(c1 == 'X' && c4 == 'X' && c7 == 'X'){
    	cout << "Win X\n";

     	greenColor(one,four,sev);

      	redColor(two,thr,five,six,eig,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c2 == 'X' && c5 == 'X' && c8 == 'X'){
    	cout << "Win X\n";

      	greenColor(two,five,eig);


      	redColor(one,thr,four,six,sev,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c3 == 'X' && c6 == 'X' && c9 == 'X'){
    	cout << "Win X\n";

      	greenColor(thr,six,nine);

      	redColor(one,two,four,five,sev,eig);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    //X's Cross
    if(c1 == 'X' && c5 == 'X' && c9 == 'X'){
    	cout << "Win X\n";


      	greenColor(one,five,nine);

      	redColor(two,thr,four,six,sev,eig);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c3 == 'X' && c5 == 'X' && c7 == 'X'){
    	cout << "Win X\n";

      	greenColor(thr,five,sev);

      	redColor(one,two,four,six,eig,nine);

		update(app,one,two,thr,four,five,six,sev,eig,nine);
		realWin = true;
    }

    /* FOR O */

    //O's Side
    if(c1 == 'O' && c2 == 'O' && c3 == 'O'){
    	cout << "Win O\n";
      
      	greenColor(one,two,thr);

      	redColor(four,five,six,sev,eig,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c4 == 'O' && c5 == 'O' && c6 == 'O'){
    	cout << "Win O\n";

      	greenColor(four,five,six);

      	redColor(one,two,thr,sev,eig,nine);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c7 == 'O' && c8 == 'O' && c9 == 'O'){
      	cout << "Win O\n";

      	greenColor(sev,eig,nine);

      	redColor(one,two,thr,four,five,six);

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    //O's Down
    if(c1 == 'O' && c4 == 'O' && c7 == 'O'){
        cout << "Win O\n";

        greenColor(one,four,sev);

        redColor(two,thr,five,six,eig,nine);

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    if(c2 == 'O' && c5 == 'O' && c8 == 'O'){
        cout << "Win O\n";

        greenColor(two,five,eig);

        redColor(one,thr,four,six,sev,nine);

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    if(c3 == 'O' && c6 == 'O' && c9 == 'O'){
        cout << "Win O\n";

        greenColor(thr,six,nine);

        redColor(one,two,four,five,sev,eig);

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    //O's Cross
    if(c1 == 'O' && c5 == 'O' && c9 == 'O'){
        cout << "Win O\n";

        greenColor(one,five,nine);

        redColor(two,thr,four,six,sev,eig);

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }if(c3 == 'O' && c5 == 'O' && c7 == 'O'){
        cout << "Win O\n";

        greenColor(thr,five,sev);

        redColor(one,two,four,six,eig,nine);

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }


}

void tips(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine)
{
	//Side 1 - X X
    if(c2 == 'X' && c3 == 'X' && c1 != 'O' && ch == 'X'){
      	one.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 2 X - X
    if(c1 == 'X' && c3 == 'X' && c2 != 'O' && ch == 'X'){
      	two.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 3 X X -
    if(c1 == 'X' && c2 == 'X' && c3 != 'O' && ch == 'X'){
      	thr.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Side 4 - X X
    if(c5 == 'X' && c6 == 'X' && c4 != 'O' && ch == 'X'){
    	four.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 5 X - X
    if(c4 == 'X' && c6 == 'X' && c5 != 'O' && ch == 'X'){
    	five.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 6 X X -
    if(c4 == 'X' && c5 == 'X' && c6 != 'O' && ch == 'X'){
    	six.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Side 7 - X X
    if(c8 == 'X' && c9 == 'X' && c7 != 'O' && ch == 'X'){
    	sev.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 8 X - X
    if(c7 == 'X' && c9 == 'X' && c8 != 'O' && ch == 'X'){
    	eig.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 9 X X -
    if(c7 == 'X' && c8 == 'X' && c9 != 'O' && ch == 'X'){
    	nine.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Down1 U- IX IX
    if(c4 == 'X' && c7 == 'X' && c1 != 'O' && ch == 'X'){
        one.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down1 UX I- IX
    if(c1 == 'X' && c7 == 'X' && c4 != 'O' && ch == 'X'){
        four.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down1 U- IX IX
    if(c1 == 'X' && c4 == 'X' && c7 != 'O' && ch == 'X'){
        sev.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Down2 U- IX IX
    if(c5 == 'X' && c8 == 'X' && c2 != 'O' && ch == 'X'){
        two.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down2 UX I- IX
    if(c2 == 'X' && c8 == 'X' && c5 != 'O' && ch == 'X'){
        five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down2 UX IX I-
    if(c2 == 'X' && c5 == 'X' && c8 != 'O' && ch == 'X'){
        eig.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Down3 U- IX IX
    if(c6 == 'X' && c9 == 'X' && c3 != 'O' && ch == 'X'){
        thr.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down3 UX I- IX
    if(c3 == 'X' && c9 == 'X' && c6 != 'O' && ch == 'X'){
        six.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down3 UX IX I-
    if(c3 == 'X' && c6 == 'X' && c9 != 'O' && ch == 'X'){
        nine.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }



    //Cross1 I- IX IX
    if(c5 == 'X' && c9 == 'X' && c1 != 'O' && ch == 'X'){
    	one.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross1 IX I- IX
    if(c1 == 'X' && c9 == 'X' && c5 != 'O' && ch == 'X'){
    	five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross1 IX IX I-
    if(c1 == 'X' && c5 == 'X' && c9 != 'O' && ch == 'X'){
    	nine.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Cross2 I- IX IX
    if(c5 == 'X' && c7 == 'X' && c3 != 'O' && ch == 'X'){
    	thr.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross2 IX I- IX
    if(c3 == 'X' && c7 == 'X' && c5 != 'O' && ch == 'X'){
    	five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross2 IX IX I-
    if(c3 == 'X' && c5 == 'X' && c7 != 'O' && ch == 'X'){
    	sev.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    /* TIPS FOR O */


    //Side 1 - O O
    if(c2 == 'O' && c3 == 'O' && c1 != 'X' && ch == 'O'){
      	one.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 2 O - O
    if(c1 == 'O' && c3 == 'O' && c2 != 'X' && ch == 'O'){
      	two.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 3 O O -
    if(c1 == 'O' && c2 == 'O' && c3 != 'X' && ch == 'O'){
      	thr.setColor( Color::Magenta );
      	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Side 4 - O O
    if(c5 == 'O' && c6 == 'O' && c4 != 'X' && ch == 'O'){
    	four.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 5 O - O
    if(c4 == 'O' && c6 == 'O' && c5 != 'X' && ch == 'O'){
    	five.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 6 O O -
    if(c4 == 'O' && c5 == 'O' && c6 != 'X' && ch == 'O'){
    	six.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Side 7 - O O
    if(c8 == 'O' && c9 == 'O' && c7 != 'X' && ch == 'O'){
    	sev.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 8 O - O
    if(c7 == 'O' && c9 == 'O' && c8 != 'X' && ch == 'O'){
    	eig.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Side 9 O O -
    if(c7 == 'O' && c8 == 'O' && c9 != 'X' && ch == 'O'){
    	nine.setColor( Color::Magenta );
    	update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Down1 U- IO IO
    if(c4 == 'O' && c7 == 'O' && c1 != 'X' && ch == 'O'){
        one.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down1 UO I- IO
    if(c1 == 'O' && c7 == 'O' && c4 != 'X' && ch == 'O'){
        four.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down1 U- IO IO
    if(c1 == 'O' && c4 == 'O' && c7 != 'X' && ch == 'O'){
        sev.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }


    //Down2 U- IO IO
    if(c5 == 'O' && c8 == 'O' && c2 != 'X' && ch == 'O'){
        two.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down2 UO I- IO
    if(c2 == 'O' && c8 == 'O' && c5 != 'X' && ch == 'O'){
        five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down2 UO IO I-
    if(c2 == 'O' && c5 == 'O' && c8 != 'X' && ch == 'O'){
        eig.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Down3 U- IO IO
    if(c6 == 'O' && c9 == 'O' && c3 != 'X' && ch == 'O'){
        thr.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down3 UO I- IO
    if(c3 == 'O' && c9 == 'O' && c6 != 'X' && ch == 'O'){
        six.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Down3 UO IO I-
    if(c3 == 'O' && c6 == 'O' && c9 != 'X' && ch == 'O'){
        nine.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }



    //Cross1 I- IO IO
    if(c5 == 'O' && c9 == 'O' && c1 != 'X' && ch == 'O'){
    	one.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross1 IO I- IO
    if(c1 == 'O' && c9 == 'O' && c5 != 'X' && ch == 'O'){
    	five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross1 IO IO I-
    if(c1 == 'O' && c5 == 'O' && c9 != 'X' && ch == 'O'){
    	nine.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }

    //Cross2 I- IO IO
    if(c5 == 'O' && c7 == 'O' && c3 != 'X' && ch == 'O'){
    	thr.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross2 IO I- IO
    if(c3 == 'O' && c7 == 'O' && c5 != 'X' && ch == 'O'){
    	five.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
    //Cross2 IO IO I-
    if(c3 == 'O' && c5 == 'O' && c7 != 'X' && ch == 'O'){
    	sev.setColor( Color::Magenta );
        update(app,one,two,thr,four,five,six,sev,eig,nine);
    }
}
int main(){
	RenderWindow window(VideoMode(150,190),"SFML TicTacToe");

	Font font;
	font.loadFromFile("HelveticaNeueLight.ttf");

	//Text's
	Text one;
	one.setFont(font);
	one.setString("1");
	one.setCharacterSize(50);
	one.setColor(Color::Black);
	one.move(10,30);

	Text two;
	two.setFont(font);
	two.setString("2");
	two.setCharacterSize(50);
	two.setColor(Color::Black);
	two.move(60,30);

	Text thr;
	thr.setFont(font);
	thr.setString("3");
	thr.setCharacterSize(50);
	thr.setColor(Color::Black);
	thr.move(110,30);

	Text four;
	four.setFont(font);
	four.setString("4");
	four.setCharacterSize(50);
	four.setColor(Color::Black);
	four.move(10,80);

	Text five;
	five.setFont(font);
	five.setString("5");
	five.setCharacterSize(50);
	five.setColor(Color::Black);
	five.move(60,80);

	Text six;
	six.setFont(font);
	six.setString("6");
	six.setCharacterSize(50);
	six.setColor(Color::Black);
	six.move(110,80);

	Text sev;
	sev.setFont(font);
	sev.setString("7");
	sev.setCharacterSize(50);
	sev.setColor(Color::Black);
	sev.move(10,130);

	Text eig;
	eig.setFont(font);
	eig.setString("8");
	eig.setCharacterSize(50);
	eig.setColor(Color::Black);
	eig.move(60,130);

	Text nine;
	nine.setFont(font);
	nine.setString("9");
	nine.setCharacterSize(50);
	nine.setColor(Color::Black);
	nine.move(110,130);


	Text playing;
	playing.setFont(font);
	playing.setString("X Oynuyor");
	playing.setCharacterSize(20);
	playing.setColor(Color::Blue);
	playing.move(15,10);

	while(window.isOpen()){
		Event event;

		while(window.pollEvent(event)){
			if(event.type == Event::Closed){
				window.close();
			}

			if (event.type == sf::Event::TextEntered)
				if(event.text.unicode < 128)
					if (static_cast<char>(event.text.unicode) == '1' && bool1 == true)
					{
            			c1 = ch;
						one.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(one);
						bool1 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '2' && bool2 == true)
					{
            			c2 = ch;
						two.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(two);
						bool2 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '3' && bool3 == true)
					{
            			c3 = ch;
						thr.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

            			if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(thr);
						bool3 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '4' && bool4 == true)
					{
            			c4 = ch;
						four.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(four);
						bool4 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '5' && bool5 == true)
					{
            			c5 = ch;
						five.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(five);
						bool5 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '6' && bool6 == true)
					{
            			c6 = ch;
						six.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(six);
						bool6 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == '7' && bool7 == true)
					{
            			c7 = ch;
						sev.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(sev);
            			bool7 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);

					}
					if (static_cast<char>(event.text.unicode) == '8' && bool8 == true)
					{
            			c8 = ch;
						eig.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(eig);
						bool8 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
          			}
					if (static_cast<char>(event.text.unicode) == '9' && bool9 == true)
					{
						c9 = ch;
						nine.setString(ch);

						if (realWin == true)
						{
							return 0;
						}

						if (ch == 'X')
						{
							ch = 'O';
							changePlayer('O',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else if (ch == 'O')
						{
							ch = 'X';
							changePlayer('X',playing);
							resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						}else{
							cout << "Error!";
						}

						window.draw(nine);
						bool9 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == 't' || static_cast<char>(event.text.unicode) == 'T')
					{
						tips(window,one,two,thr,four,five,six,sev,eig,nine);
					}
					if (static_cast<char>(event.text.unicode) == 'q' || static_cast<char>(event.text.unicode) == 'Q')
					{
						ch = 'X'; // Reset x
						c1 = '1';
						c2 = '2';
						c3 = '3';
						c4 = '4';
						c5 = '5';
						c6 = '6';
						c7 = '7';
						c8 = '8';
						c9 = '9';
						/// Booleans ///
						bool1 = true;
						bool2 = true;
						bool3 = true;
						bool4 = true;
						bool5 = true;
						bool6 = true;
						bool7 = true;
						bool8 = true;
						bool9 = true;

						one.setString("1");
						two.setString("2");
						thr.setString("3");
						four.setString("4");
						five.setString("5");
						six.setString("6");
						sev.setString("7");
						eig.setString("8");
						nine.setString('9');
						resetColor(window,one,two,thr,four,five,six,sev,eig,nine);
						update(window,one,two,thr,four,five,six,sev,eig,nine);

						realWin = false;
					}
					

		}
		window.clear(Color::White);
		window.draw(playing);
		update(window,one,two,thr,four,five,six,sev,eig,nine);
		window.display();
	}
}
