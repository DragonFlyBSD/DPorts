# Created by: tobez
# $FreeBSD: databases/p5-GraphViz-DBI/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		GraphViz::DBI.3

.include <bsd.port.mk>
