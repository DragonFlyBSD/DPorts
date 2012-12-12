# New ports collection makefile for:	p5-Class-Std
# Date created:		30 May 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Class-Std/Makefile,v 1.12 2012/11/17 05:56:08 svnexp Exp $
#

PORTNAME=	Class-Std
DISTVERSION=	0.011
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Support for creating standard "inside-out" classes

BUILD_DEPENDS=	p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Class::Std.3

.include <bsd.port.mk>
