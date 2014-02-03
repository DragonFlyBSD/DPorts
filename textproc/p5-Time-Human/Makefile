# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: textproc/p5-Time-Human/Makefile 342249 2014-02-02 08:11:05Z eadler $

PORTNAME=	Time-Human
PORTVERSION=	1.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert localtime() format to "speaking clock" time

USES=		perl5
USE_PERL5=	configure

test:		build
		cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test

.include <bsd.port.mk>
