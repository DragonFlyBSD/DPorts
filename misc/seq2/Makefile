# Created by: osa
# $FreeBSD: misc/seq2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	seq2
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	LOCAL/bf

MAINTAINER=	bf@FreeBSD.org
COMMENT=	A clone of the UNIX(tm) program called seq

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
CONFIGURE_SCRIPT=	configure.1

MAN1=		seq2.1
PLIST_FILES=	bin/seq2

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|$$(CC) -o|$$(CC) $$(CFLAGS) -o|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
