#pragma once 

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

using std::string;
using std::cout;
using std::endl;
using std::map;

class ASpell;
class ATarget;

class Warlock {
    private:
        string _name;
        string _title;
        map<string, ASpell*> _SpellBook;
    public:
        const string& getName() const;
        const string& getTitle() const;
        void setTitle(const string& title);

        Warlock(const string& name, const string& title);
        ~Warlock();

        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(const string& spellName);
        void launchSpell(const string& spellName, const ATarget& target);
};