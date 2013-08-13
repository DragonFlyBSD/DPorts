# Created by: will
# $FreeBSD: www/p5-WWW-Robot/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	WWW-Robot
PORTVERSION=	0.026
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	WWW::Robot - configurable web traversal engine

BUILD_DEPENDS=	p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Tagset>=0:${PORTSDIR}/www/p5-HTML-Tagset

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Robot.3

.include <bsd.port.mk>
