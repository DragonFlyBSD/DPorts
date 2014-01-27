# Created by: Yoichi NAKAYAMA <yoichi@eken.phys.nagoya-u.ac.jp>
# $FreeBSD: editors/boiling-egg/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	boiling-egg
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	editors elisp
MASTER_SITES=	http://www.gcd.org/sengoku/boiling-egg/
DISTNAME=	${PORTNAME}.el
EXTRACT_SUFX=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A front-end of Egg V4

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

ELISPDIR=	share/emacs/site-lisp
PLIST_SUB+=	ELISPDIR=${ELISPDIR}

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/${ELISPDIR}
	${INSTALL_DATA} ${_DISTDIR}/${DISTNAME} ${PREFIX}/${ELISPDIR}

.include <bsd.port.mk>
