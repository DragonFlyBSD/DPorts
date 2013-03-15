# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-Mail-Box-Parser-C/Makefile 313446 2013-03-05 11:11:50Z tobez $

PORTNAME=	Mail-Box-Parser-C
PORTVERSION=	3.007
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parsing folders for Mail::Box with C routines

BUILD_DEPENDS=	p5-Mail-Box>=0:${PORTSDIR}/mail/p5-Mail-Box
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::Box::Parser::C.3

.include <bsd.port.mk>
