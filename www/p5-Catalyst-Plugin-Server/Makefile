# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-Catalyst-Plugin-Server/Makefile 332617 2013-11-03 15:16:25Z az $

PORTNAME=	Catalyst-Plugin-Server
PORTVERSION=	0.28
PORTREVISION=	1
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst Server Plugin: Base & XMLRPC

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat \
		p5-Clone-Fast>=0:${PORTSDIR}/devel/p5-Clone-Fast \
		p5-RPC-XML>=0:${PORTSDIR}/net/p5-RPC-XML
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
