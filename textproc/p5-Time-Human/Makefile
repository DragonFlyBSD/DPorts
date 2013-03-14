# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: textproc/p5-Time-Human/Makefile 313672 2013-03-08 20:23:38Z eadler $

PORTNAME=	Time-Human
PORTVERSION=	1.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Convert localtime() format to "speaking clock" time

PERL_CONFIGURE=	yes

MAN3=		Time::Human.3

MAKE_JOBS_SAFE=	yes

test:		build
		cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test

.include <bsd.port.mk>
