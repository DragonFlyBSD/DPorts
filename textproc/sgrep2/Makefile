# Created by: ijliao
# $FreeBSD: textproc/sgrep2/Makefile 338938 2014-01-06 21:23:31Z antoine $

PORTNAME=	sgrep2
PORTVERSION=	1.94a
CATEGORIES=	textproc
MASTER_SITES=	ftp://ftp.cs.helsinki.fi/pub/Software/Local/Sgrep/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	jkoshy
DISTNAME=	sgrep-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Grep for structured text like SGML and HTML

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--datadir=${DATADIR}

CONFLICTS=	sgrep-0.*

.include <bsd.port.mk>
