# New ports collection makefile for:	p5-Cache-LRU
# Date created:				2012-05-26
# Whom:	      				Andrey Chernov <ache@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Cache-LRU/Makefile,v 1.3 2012/11/17 05:56:06 svnexp Exp $
#

PORTNAME=	Cache-LRU
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KAZUHO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A simple, fast implementation of an in-memory LRU cache

TEST_DEPENDS=	p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires

PERL_CONFIGURE=	yes

MAN3=		Cache::LRU.3

.include <bsd.port.mk>
