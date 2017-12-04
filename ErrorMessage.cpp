// Final Project Milestone 2
// Version 1.0
// 29/11/2017
// Pedro Henrique Carvalho
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#include "ErrorMessage.h"

namespace sict{


	// S E S Safe Empty State
	void ErrorMessage::ses(){
      obj_message = nullptr;
	}
   
   //Explcit function implementation.
	ErrorMessage::ErrorMessage(const char* errorMessage = nullptr){
		if(errorMessage != nullptr){
			strncpy(obj_message, errorMessage, strlen(errorMessage));
         obj_message[strlen(errorMessage)] = '/0';
		}else{
			ses();
		}
	}

   ErrorMessage::~ErrorMessage() {
      delete[] obj_message;
   }

	std::ostream& operator<<(std::ostream& istr, const ErrorMessage& emOp) {
      //emOp.write(istr);
      return istr;
   }





}