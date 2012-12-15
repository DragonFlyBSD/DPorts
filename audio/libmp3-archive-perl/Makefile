# New ports collection makefile for:	libmp3-archive-perl
# Date created:		2010-07-06
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@sunpoet.net>
#
# $FreeBSD: ports/audio/libmp3-archive-perl/Makefile,v 1.4 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libmp3-archive-perl
PORTVERSION=	0.9
CATEGORIES=	audio perl5
MASTER_SITES=	http://erislabs.net/ianb/projects/${PORTNAME}/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to manipulate filenames containing music metadata

PERL_CONFIGURE=	yes

MAN3=		MP3::Archive::Config.3 MP3::Archive::Format.3 MP3::Archive.3

post-patch:
	@${REINPLACE_CMD} -e '/^DESTINSTALLSYSCONFDIR/ s|DESTDIR|PREFIX|' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
