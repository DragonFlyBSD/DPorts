# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-Template-Plugin-Subst/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Plugin-Subst
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	TT plugin for s/// functionality in templates

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=	Template::Plugin::Subst.3

NO_STAGE=	yes
.include <bsd.port.mk>
