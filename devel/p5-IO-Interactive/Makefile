# New ports collection makefile for:  IO-Interactive
# Date created: 12 December 2009
# Whom:		Andrey Kostenko <andrey@kostenko.name>
#
# $FreeBSD: ports/devel/p5-IO-Interactive/Makefile,v 1.8 2012/11/17 05:56:18 svnexp Exp $
#

PORTNAME=	IO-Interactive
PORTVERSION=	0.0.6
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Utilities for interactive I/O

BUILD_DEPENDS=	p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:0.01

PERL_CONFIGURE=	YES
MAN3=	IO::Interactive.3

.include <bsd.port.mk>
