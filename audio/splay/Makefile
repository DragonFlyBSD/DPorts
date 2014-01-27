# Created by: Choi Jun Ho <junker@moderato.snu.ac.kr>
# $FreeBSD: audio/splay/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	splay
PORTVERSION=	0.9.5.2
CATEGORIES=	audio
MASTER_SITES=	http://splay.sourceforge.net/tgz/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio player that decodes MPEG Layer 1/2/3 and WAV files

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/splay man/man1/splay.1.gz

# XXX: pthread library can be used, but sound quality is buggy(?)

.include <bsd.port.mk>
