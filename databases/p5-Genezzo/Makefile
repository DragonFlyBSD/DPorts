# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: databases/p5-Genezzo/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	Genezzo
PORTVERSION=	0.72
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensible database with SQL and DBI

RUN_DEPENDS=	p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
