# New ports collection makefile for:	Devel-PartialDump
# Date created:	   11 May 2009
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Devel-PartialDump/Makefile,v 1.11 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	Devel-PartialDump
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Partial dumping of data structures, optimized for argument printing

BUILD_DEPENDS=	p5-Moose>0:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-clean>=0.20:${PORTSDIR}/devel/p5-namespace-clean \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter

RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Warn>=0:${PORTSDIR}/devel/p5-Test-Warn \
		p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=		Devel::PartialDump.3

.include <bsd.port.mk>
