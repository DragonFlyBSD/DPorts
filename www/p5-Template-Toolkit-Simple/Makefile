# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: www/p5-Template-Toolkit-Simple/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	Template-Toolkit-Simple
PORTVERSION=	0.16
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A Simple Interface to Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
