//Instructions for building a horse :)
class Horse {
private:
	int pos;
	int id;
public:
	Horse();
	Horse(int id);
	int getPos() const;
	void setPos(int p);
	int getId() const;
	void setId(int p);
	void advance();
	bool isWinner() const;
	void printLane() const;
};
