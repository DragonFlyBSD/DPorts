# $FreeBSD: ftp/p5-Net-FTP-Recursive/Makefile 327729 2013-09-20 17:23:18Z bapt $

PORTNAME=	Net-FTP-Recursive
PORTVERSION=	2.04
CATEGORIES=	ftp perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl module to provide recursive FTP client class

BUILD_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net
RUN_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::FTP::Recursive.3

NO_STAGE=	yes
.include <bsd.port.mk>
