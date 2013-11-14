# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: textproc/p5-Tk-Pod/Makefile 333316 2013-11-09 18:48:32Z sunpoet $

PORTNAME=	Tk-Pod
PORTVERSION=	0.9942
CATEGORIES=	textproc tk perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple Pod browser with hypertext capabilities in a Toplevel widget

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Tk>=800.004:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
