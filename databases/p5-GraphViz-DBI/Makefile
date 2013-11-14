# Created by: tobez
# $FreeBSD: databases/p5-GraphViz-DBI/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	GraphViz-DBI
PORTVERSION=	1.100860
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARCEL
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	GraphViz::DBI - graph database tables and relations

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-GraphViz>=0:${PORTSDIR}/graphics/p5-GraphViz
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-GraphViz>=0:${PORTSDIR}/graphics/p5-GraphViz

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
