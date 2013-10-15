# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: www/p5-Catalyst-Plugin-DefaultEnd/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Catalyst-Plugin-DefaultEnd
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Sensible default end action

RUN_DEPENDS=	p5-Catalyst-Runtime>=5.2000:${PORTSDIR}/www/p5-Catalyst-Runtime
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=	Catalyst::Plugin::DefaultEnd.3

NO_STAGE=	yes
.include <bsd.port.mk>
