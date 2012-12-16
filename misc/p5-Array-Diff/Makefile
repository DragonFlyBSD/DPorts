# New ports collection makefile for:	p5-Array-Diff
# Date created:				March 09, 2008
# Whom:					Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/misc/p5-Array-Diff/Makefile,v 1.6 2012/11/17 05:59:42 svnexp Exp $
#

PORTNAME=	Array-Diff
PORTVERSION=	0.07
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Diff two arrays

RUN_DEPENDS=	p5-Algorithm-Diff>=1.19:${PORTSDIR}/devel/p5-Algorithm-Diff \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Array::Diff.3

.include <bsd.port.mk>
