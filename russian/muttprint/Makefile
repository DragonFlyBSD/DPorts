# New ports collection makefile for:	ru-muttprint
# Date Created:         04 April 2003
# Whom:                 Alex Semenyaka <alexs@snark.ratmir.ru>
#
# $FreeBSD: ports/russian/muttprint/Makefile,v 1.10 2012/11/17 06:00:56 svnexp Exp $
#

PORTNAME=	muttprint
PORTREVISION=	5
CATEGORIES=	russian print

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Print in Russian

MASTERDIR=	${.CURDIR}/../../print/muttprint
ADD_TRANS=	${.CURDIR}/files/translation-??.pl

pre-build:
	@${REINPLACE_CMD} '/^\\\\usepackage\[T1\]{fontenc}/d' ${WRKSRC}/${PORTNAME}
	@${CP} ${ADD_TRANS} ${WRKSRC}/translations/

.include "${MASTERDIR}/Makefile"
