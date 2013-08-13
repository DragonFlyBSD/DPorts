# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: ftp/p5-Net-FTPSSL/Makefile 324434 2013-08-09 13:20:40Z jadawin $

PORTNAME=	Net-FTPSSL
PORTVERSION=	0.23
CATEGORIES=	ftp perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A FTP over SSL/TLS class

BUILD_DEPENDS=	p5-IO-Socket-SSL>=1.08:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-Net-SSLeay>=0:${PORTSDIR}/security/p5-Net-SSLeay
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::FTPSSL.3

.include <bsd.port.mk>
