# Created by: Trevor Corpropst <tcornpropst@cox.net>
# $FreeBSD: net/p5-Net-SFTP/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-SFTP
PORTVERSION=	0.10
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module implementing Secure File Transfer Protocol client

BUILD_DEPENDS=	p5-Net-SSH-Perl>=0:${PORTSDIR}/net/p5-Net-SSH-Perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
