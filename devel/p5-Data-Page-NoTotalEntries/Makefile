# New ports collection makefile for:	Data::Page::NoTotalEntries
# Date created:		26 Feb 2011
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Data-Page-NoTotalEntries/Makefile,v 1.5 2012/11/17 05:56:10 svnexp Exp $
#

PORTNAME=	Data-Page-NoTotalEntries
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TOKUHIROM
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for paging results without total entries

RUN_DEPENDS=	\
	p5-Class-Accessor-Lite>=0.05:${PORTSDIR}/devel/p5-Class-Accessor-Lite
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=	Data::Page::NoTotalEntries.3 \
	Data::Page::README.3

.include <bsd.port.mk>
