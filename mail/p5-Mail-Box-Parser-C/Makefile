# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-Mail-Box-Parser-C/Makefile 332803 2013-11-05 02:54:53Z vanilla $

PORTNAME=	Mail-Box-Parser-C
PORTVERSION=	3.007
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parsing folders for Mail::Box with C routines

BUILD_DEPENDS=	p5-Mail-Box>=0:${PORTSDIR}/mail/p5-Mail-Box
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
