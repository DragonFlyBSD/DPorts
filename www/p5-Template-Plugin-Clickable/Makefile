# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-Template-Plugin-Clickable/Makefile 338785 2014-01-05 15:36:32Z az $

PORTNAME=	Template-Plugin-Clickable
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	TT plugin to make URLs clickable in HTML

BUILD_DEPENDS=	p5-URI-Find>=0.13:${PORTSDIR}/textproc/p5-URI-Find \
		p5-Template-Toolkit>=2.07:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
