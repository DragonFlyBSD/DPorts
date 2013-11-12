# Created by: Alex Kapranoff <kappa@rambler-co.ru>
# $FreeBSD: security/p5-Net-OpenID-Server/Makefile 332949 2013-11-06 07:39:31Z vanilla $

PORTNAME=	Net-OpenID-Server
PORTVERSION=	1.09
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Reference implementation of OpenID server

BUILD_DEPENDS=	p5-Crypt-DH>=0:${PORTSDIR}/security/p5-Crypt-DH \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
