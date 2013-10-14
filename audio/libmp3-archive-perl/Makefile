# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@sunpoet.net>
# $FreeBSD: audio/libmp3-archive-perl/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	libmp3-archive-perl
PORTVERSION=	0.9
CATEGORIES=	audio perl5
MASTER_SITES=	http://erislabs.net/ianb/projects/${PORTNAME}/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to manipulate filenames containing music metadata

USE_PERL5=	configure
NO_STAGE=	yes
USES=		perl5

MAN3=		MP3::Archive::Config.3 MP3::Archive::Format.3 MP3::Archive.3

post-patch:
	@${REINPLACE_CMD} -e '/^DESTINSTALLSYSCONFDIR/ s|DESTDIR|PREFIX|' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
