#!gsi -:darR,t8,f8,-8

(jazz:verbose-kernel 'kernel.main)

(define (jazz:main)
  (jazz:executable-main)
  (jazz:exit-cleanup))

(jazz:main-set! jazz:main)
