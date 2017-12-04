// Final Project Milestone 2
// Version 1.0
// 29/11/2017
// Pedro Henrique Carvalho
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason


#ifndef SICT_ERRORMESSAGE_H
#define SICT_ERRORMESSAGE_H

namespace sict{

	class ErrorMessage {
		private:
			char* obj_message;
			void ses();//S E S Safe Empty State

		public:
			explicit ErrorMessage(const char* ErrorMessage = nullptr);
         ErrorMessage(const ErrorMessage& em) = delete;
         ErrorMessage& operator=(const ErrorMessage& em) = delete;
         virtual ~ErrorMessage();
         void clear();
         bool isCLear();
         void message(const char* str);
         const char* message() const;
   };


   //------------------------HELPER FUNCTIONS-----------------------------

   std::ostream& operator<<(std::ostream& istr, const ErrorMessage& emOp);

   //---------------------------------------------------------------------

}
#endif