# New ports collection makefile for:	amanda-perl-wrapper
# Date created:		1 Nov 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/misc/amanda-perl-wrapper/Makefile,v 1.3 2012/11/17 05:59:32 svnexp Exp $
#

PORTNAME=	amanda-perl-wrapper
PORTVERSION=	1.01
CATEGORIES=	misc perl5
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl wrapper to use with Amanda (with libthr.so.* linked)

USE_PERL5_RUN=	yes
SUB_FILES=	perl-amanda.c
SUB_LIST=	PREFIX=${LOCALBASE}
PLIST_FILES=	bin/perl-amanda
WRKSRC=		${WRKDIR}

do-fetch:
	@${DO_NADA}

pre-build: apply-slist

do-build:
	cd ${WRKSRC} && ${CC} -o perl-amanda perl-amanda.c

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/perl-amanda ${PREFIX}/bin/

.include <bsd.port.pre.mk>

LIBTHR=		/usr/lib/thread/libthread_xu.so.2
SUB_LIST+=	LIBTHR=${LIBTHR}

.include <bsd.port.post.mk>
