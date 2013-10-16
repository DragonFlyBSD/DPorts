# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: net/p5-Net-FS-Flickr/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-FS-Flickr
PORTVERSION=	0.1
PORTREVISION=	6
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	A Perl interface for store and retrieve files on Flickr

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Acme-Steganography-Image-Png>=0:${PORTSDIR}/graphics/p5-Acme-Steganography-Image-Png \
		p5-Flickr-Upload>=0:${PORTSDIR}/www/p5-Flickr-Upload
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN1=		flickrfs.1
MAN3=		Net::FS::Flickr.3 \
		Net::FS::Flickr::Access.3

NO_STAGE=	yes
.include <bsd.port.mk>
