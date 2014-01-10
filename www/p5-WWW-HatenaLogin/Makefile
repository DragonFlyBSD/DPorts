# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: www/p5-WWW-HatenaLogin/Makefile 338765 2014-01-05 13:18:23Z az $

PORTNAME=	WWW-HatenaLogin
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Login/Logout interface to Hatena

BUILD_DEPENDS=	p5-Crypt-SSLeay>=0:${PORTSDIR}/security/p5-Crypt-SSLeay \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
