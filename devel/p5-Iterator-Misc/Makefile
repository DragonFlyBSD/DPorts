# New ports collection makefile for:	Iterator-Misc
# Date created:				18 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Iterator-Misc/Makefile,v 1.8 2012/11/17 05:56:20 svnexp Exp $
#

PORTNAME=	Iterator-Misc
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Miscellaneous iterator functions

BUILD_DEPENDS=	p5-Iterator>=0:${PORTSDIR}/devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator::Misc.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
