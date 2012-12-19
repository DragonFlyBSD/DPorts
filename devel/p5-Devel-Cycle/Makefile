# New ports collection makefile for:	Devel-Cycle
# Date created:	   16 January 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Devel-Cycle/Makefile,v 1.15 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	Devel-Cycle
PORTVERSION=	1.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Find memory cycles in objects

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::Cycle.3

.include <bsd.port.mk>
