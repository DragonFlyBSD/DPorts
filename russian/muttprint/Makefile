# Created by: Alex Semenyaka <alexs@snark.ratmir.ru>
# $FreeBSD: russian/muttprint/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	muttprint
PORTREVISION=	5
CATEGORIES=	russian print

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Print in Russian

MASTERDIR=	${.CURDIR}/../../print/muttprint
ADD_TRANS=	${.CURDIR}/files/translation-??.pl

NO_STAGE=	yes
pre-build:
	@${REINPLACE_CMD} '/^\\\\usepackage\[T1\]{fontenc}/d' ${WRKSRC}/${PORTNAME}
	@${CP} ${ADD_TRANS} ${WRKSRC}/translations/

.include "${MASTERDIR}/Makefile"
