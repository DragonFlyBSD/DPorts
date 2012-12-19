# New ports collection makefile for:	p5-Starlink-AST
# Date created:				2012-07-01
# Whom:					Wen Heping<wen@FreeBSD.org>
#
# $FreeBSD: ports/astro/p5-Starlink-AST/Makefile,v 1.2 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	Starlink-AST
PORTVERSION=	1.02
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TJENNESS
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Interface to the Starlink AST library

BUILD_DEPENDS=	p5-Test-Number-Delta>=0:${PORTSDIR}/devel/p5-Test-Number-Delta
RUN_DEPENDS=	p5-Test-Number-Delta>=0:${PORTSDIR}/devel/p5-Test-Number-Delta

PERL_MODBUILD=	yes

MAN3=		Starlink::AST.3 \
		Starlink::AST::PGPLOT.3 \
		Starlink::AST::Tk.3 \
		Starlink::AST::PLplot.3

.include <bsd.port.mk>
