# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: textproc/p5-Time-Human/Makefile 324222 2013-08-04 12:30:54Z az $

PORTNAME=	Time-Human
PORTVERSION=	1.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Convert localtime() format to "speaking clock" time

USES=		perl5
USE_PERL5=	configure

MAN3=		Time::Human.3

test:		build
		cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test

.include <bsd.port.mk>
