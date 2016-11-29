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

void resetColor(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine){
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
void win(RenderWindow &app,Text &one,Text &two,Text &thr,Text &four,Text &five,Text &six,Text &sev,Text &eig,Text &nine){
    /* FOR X */
    //X's Side
    if(c1 == 'X' && c2 == 'X' && c3 == 'X'){
    	cout << "Win X\n";

      one.setColor( Color::Green );
      two.setColor( Color::Green );
      thr.setColor( Color::Green );

      four.setColor( Color::Red );
      five.setColor( Color::Red );
      six.setColor( Color::Red );
      sev.setColor( Color::Red );
      eig.setColor( Color::Red );
      nine.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    if(c4 == 'X' && c5 == 'X' && c6 == 'X'){
    	cout << "Win X\n";

      four.setColor( Color::Green );
      five.setColor( Color::Green );
      six.setColor( Color::Green );

      one.setColor( Color::Red );
      two.setColor( Color::Red );
      thr.setColor( Color::Red );
      sev.setColor( Color::Red );
      eig.setColor( Color::Red );
      nine.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    if(c7 == 'X' && c8 == 'X' && c9 == 'X'){
    	cout << "Win X\n";

      sev.setColor( Color::Green );
      eig.setColor( Color::Green );
      nine.setColor( Color::Green );

      one.setColor( Color::Red );
      two.setColor( Color::Red );
      thr.setColor( Color::Red );
      four.setColor( Color::Red );
      five.setColor( Color::Red );
      six.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    //X's Down
    if(c1 == 'X' && c4 == 'X' && c7 == 'X'){
    	cout << "Win X\n";

      one.setColor( Color::Green );
      four.setColor( Color::Green );
      sev.setColor( Color::Green );

      two.setColor( Color::Red );
      thr.setColor( Color::Red );
      five.setColor( Color::Red );
      six.setColor( Color::Red );
      eig.setColor( Color::Red );
      nine.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    if(c2 == 'X' && c5 == 'X' && c8 == 'X'){
    	cout << "Win X\n";

      two.setColor( Color::Green );
      five.setColor( Color::Green );
      eig.setColor( Color::Green );

      one.setColor( Color::Red );
      thr.setColor( Color::Red );
      four.setColor( Color::Red );
      six.setColor( Color::Red );
      sev.setColor( Color::Red );
      nine.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    if(c3 == 'X' && c6 == 'X' && c9 == 'X'){
    	cout << "Win X\n";

      thr.setColor( Color::Green );
      six.setColor( Color::Green );
      nine.setColor( Color::Green );

      one.setColor( Color::Red );
      two.setColor( Color::Red );
      four.setColor( Color::Red );
      five.setColor( Color::Red );
      sev.setColor( Color::Red );
      eig.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    //X's Cross
    if(c1 == 'X' && c5 == 'X' && c9 == 'X'){
    	cout << "Win X\n";

      one.setColor( Color::Green );
      five.setColor( Color::Green );
      nine.setColor( Color::Green );

      two.setColor( Color::Red );
      thr.setColor( Color::Red );
      four.setColor( Color::Red );
      six.setColor( Color::Red );
      sev.setColor( Color::Red );
      eig.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }if(c3 == 'X' && c5 == 'X' && c7 == 'X'){
    	cout << "Win X\n";

      thr.setColor( Color::Green );
      five.setColor( Color::Green );
      sev.setColor( Color::Green );

      one.setColor( Color::Red );
      two.setColor( Color::Red );
      four.setColor( Color::Red );
      six.setColor( Color::Red );
      eig.setColor( Color::Red );
      nine.setColor( Color::Red );

	update(app,one,two,thr,four,five,six,sev,eig,nine);
	realWin = true;
    }
    /* FOR O */

     //O's Side
    if(c1 == 'O' && c2 == 'O' && c3 == 'O'){
    	cout << "Win O\n";

      one.setColor( Color::Green );
      two.setColor( Color::Green );
      thr.setColor( Color::Green );

      four.setColor( Color::Red );
      five.setColor( Color::Red );
      six.setColor( Color::Red );
      sev.setColor( Color::Red );
      eig.setColor( Color::Red );
      nine.setColor( Color::Red );

      update(app,one,two,thr,four,five,six,sev,eig,nine);
      realWin = true;
    }
    if(c4 == 'O' && c5 == 'O' && c6 == 'O'){
    	cout << "Win O\n";

      	four.setColor( Color::Green );
      	five.setColor( Color::Green );
      	six.setColor( Color::Green );

      	one.setColor( Color::Red );
      	two.setColor( Color::Red );
      	thr.setColor( Color::Red );
      	sev.setColor( Color::Red );
      	eig.setColor( Color::Red );
      	nine.setColor( Color::Red );

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    if(c7 == 'O' && c8 == 'O' && c9 == 'O'){
      cout << "Win O\n";

      	sev.setColor( Color::Green );
      	eig.setColor( Color::Green );
      	nine.setColor( Color::Green );


      	one.setColor( Color::Red );
      	two.setColor( Color::Red );
      	thr.setColor( Color::Red );
      	four.setColor( Color::Red );
      	five.setColor( Color::Red );
      	six.setColor( Color::Red );

      	update(app,one,two,thr,four,five,six,sev,eig,nine);
      	realWin = true;
    }
    //O's Down
    if(c1 == 'O' && c4 == 'O' && c7 == 'O'){
        cout << "Win O\n";

        one.setColor( Color::Green );
        four.setColor( Color::Green );
        sev.setColor( Color::Green );

        two.setColor( Color::Red );
        thr.setColor( Color::Red );
        five.setColor( Color::Red );
        six.setColor( Color::Red );
        eig.setColor( Color::Red );
        nine.setColor( Color::Red );

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    if(c2 == 'O' && c5 == 'O' && c8 == 'O'){
        cout << "Win O\n";

        two.setColor( Color::Green );
        five.setColor( Color::Green );
        eig.setColor( Color::Green );

        one.setColor( Color::Red );
        thr.setColor( Color::Red );
        four.setColor( Color::Red );
        six.setColor( Color::Red );
        sev.setColor( Color::Red );
        nine.setColor( Color::Red );

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    if(c3 == 'O' && c6 == 'O' && c9 == 'O'){
        cout << "Win O\n";

        thr.setColor( Color::Green );
        six.setColor( Color::Green );
        nine.setColor( Color::Green );

        one.setColor( Color::Red );
        two.setColor( Color::Red );
        four.setColor( Color::Red );
        five.setColor( Color::Red );
        sev.setColor( Color::Red );
        eig.setColor( Color::Red );

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }
    //O's Cross
    if(c1 == 'O' && c5 == 'O' && c9 == 'O'){
        cout << "Win O\n";

        one.setColor( Color::Green );
        five.setColor( Color::Green );
        nine.setColor( Color::Green );

        two.setColor( Color::Red );
        thr.setColor( Color::Red );
        four.setColor( Color::Red );
        six.setColor( Color::Red );
        sev.setColor( Color::Red );
        eig.setColor( Color::Red );

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }if(c3 == 'O' && c5 == 'O' && c7 == 'O'){
        cout << "Win O\n";

        thr.setColor( Color::Green );
        five.setColor( Color::Green );
        sev.setColor( Color::Green );

        one.setColor( Color::Red );
        two.setColor( Color::Red );
        four.setColor( Color::Red );
        six.setColor( Color::Red );
        eig.setColor( Color::Red );
        nine.setColor( Color::Red );

        update(app,one,two,thr,four,five,six,sev,eig,nine);
        realWin = true;
    }


}
int main(){
	RenderWindow window(VideoMode(150,170),"SFML TicTacToe");

	Font font;
	font.loadFromFile("HelveticaNeueLight.ttf");

	//Text's
	Text one;
	one.setFont(font);
	one.setString("1");
	one.setCharacterSize(50);
	one.setColor(Color::Black);
	one.move(10,10);

	Text two;
	two.setFont(font);
	two.setString("2");
	two.setCharacterSize(50);
	two.setColor(Color::Black);
	two.move(60,10);

	Text thr;
	thr.setFont(font);
	thr.setString("3");
	thr.setCharacterSize(50);
	thr.setColor(Color::Black);
	thr.move(110,10);

	Text four;
	four.setFont(font);
	four.setString("4");
	four.setCharacterSize(50);
	four.setColor(Color::Black);
	four.move(10,60);

	Text five;
	five.setFont(font);
	five.setString("5");
	five.setCharacterSize(50);
	five.setColor(Color::Black);
	five.move(60,60);

	Text six;
	six.setFont(font);
	six.setString("6");
	six.setCharacterSize(50);
	six.setColor(Color::Black);
	six.move(110,60);

	Text sev;
	sev.setFont(font);
	sev.setString("7");
	sev.setCharacterSize(50);
	sev.setColor(Color::Black);
	sev.move(10,110);

	Text eig;
	eig.setFont(font);
	eig.setString("8");
	eig.setCharacterSize(50);
	eig.setColor(Color::Black);
	eig.move(60,110);

	Text nine;
	nine.setFont(font);
	nine.setString("9");
	nine.setCharacterSize(50);
	nine.setColor(Color::Black);
	nine.move(110,110);

	Sprite background;
	Texture backgroundTexture;

	backgroundTexture.loadFromFile("background.png");
	background.setTexture(backgroundTexture);

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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

            			if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
							
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
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
						}else{
						
						}

						if (ch == 'X')
						{
							ch = 'O';
						}else if (ch == 'O')
						{
							ch = 'X';
						}else{
							cout << "Error!";
						}

						window.draw(nine);
						bool9 = false;
            			win(window,one,two,thr,four,five,six,sev,eig,nine);
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
		window.draw(background);
		window.draw(one);
		window.draw(two);
		window.draw(thr);
		window.draw(four);
		window.draw(five);
		window.draw(six);
		window.draw(sev);
		window.draw(eig);
		window.draw(nine);
		window.display();
	}
}
